//
//  FilterTableViewCell.m
//  SummerYelpMock
//
//  Created by 孙早一 on 2017/9/15.
//  Copyright © 2017年 孙早一. All rights reserved.
//

#import "FilterTableViewCell.h"
#import "YelpDataStore.h"
@interface FilterTableViewCell ()
@property (weak, nonatomic) IBOutlet UILabel *categoryTitle;
@property (weak, nonatomic) IBOutlet UISwitch *filter;



@property (nonatomic) YelpFilterDataModel *dataModel;

@end


@implementation FilterTableViewCell
- (void)updateDataModel:(YelpFilterDataModel *)dataModel
{
    self.dataModel = dataModel;
    self.categoryTitle.text = dataModel.categoryName;
        [self.filter setOn:[[YelpDataStore sharedInstance].selectedCategories containsObject:self.dataModel.categoryCode]];
}

- (IBAction)didUpdataCategory:(id)sender {
    if ([self.filter isOn]) {
        [[YelpDataStore sharedInstance].selectedCategories addObject:self.dataModel.categoryCode];
    } else {
        [[YelpDataStore sharedInstance].selectedCategories removeObject:self.dataModel.categoryCode];
    }

}


- (void)awakeFromNib {
    [super awakeFromNib];
    // Initialization code
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

@end

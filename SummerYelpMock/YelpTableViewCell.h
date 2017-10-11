//
//  YelpTableViewCell.h
//  SummerYelpMock
//
//  Created by 孙早一 on 2017/9/2.
//  Copyright © 2017年 孙早一. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YelpDataModel.h"

@interface YelpTableViewCell : UITableViewCell

- (void)updateBasedOnDataModel:(YelpDataModel *)dataModel;

@end

//
//  MapTableViewCell.h
//  SummerYelpMock
//
//  Created by 孙早一 on 2017/9/5.
//  Copyright © 2017年 孙早一. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <UIKit/UIKit.h>
#import "YelpDataModel.h"
#import "YelpAnnotation.h"

@interface MapTableViewCell : UITableViewCell

- (void)updateBasedOnDataModel:(YelpDataModel *)dataModel;

@end


//
//  YelpFilterDataModel.h
//  SummerYelpMock
//
//  Created by 孙早一 on 2017/9/15.
//  Copyright © 2017年 孙早一. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YelpFilterDataModel : NSObject

@property (nonatomic, copy) NSString *categoryName;
@property (nonatomic, copy) NSString *categoryCode;

+ (NSArray <YelpFilterDataModel *>*)buildDataModelArrayFromDictionaryArray:(NSArray<NSDictionary *> *)dictArray;
@end

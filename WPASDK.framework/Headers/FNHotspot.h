//
//  HotspotAPI.h
//  WPASharingConn
//
//  Created by Alejandro Espinosa on 28/9/16.
//  Copyright © 2016 Fon Labs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FNHotspot.h"

@class DBHotspot;

#define kStatusActive @"ACTIVE"
#define kStatusPending @"PENDING"
#define kStatusSuspended @"SUSPENDED"

@interface FNHotspot : NSObject

@property (nullable, nonatomic, retain) NSString *bssid;
@property (nullable, nonatomic, retain) NSNumber *latitude;
@property (nullable, nonatomic, retain) NSNumber *longitude;
@property (nullable, nonatomic, retain) NSString *password;
@property (nullable, nonatomic, retain) NSString *security;
@property (nullable, nonatomic, retain) NSString *ssid;
@property (nullable, nonatomic, retain) NSString *externalId;
@property (nullable, nonatomic, retain) NSString *geohash;
@property (nullable, nonatomic, retain) NSString *status;

-(nullable FNHotspot*)initWithDictionary:(nullable NSDictionary *)dict;
-(nullable FNHotspot*)initWithDbModel:(nullable DBHotspot *)hotspotModel;
@end

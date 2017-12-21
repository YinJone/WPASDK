//
//  WPASDK.h
//  WPASDK
//
//  Created by Alejandro Espinosa on 12/6/17.
//  Copyright © 2017 Fon. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FNHotspot.h"

//! Project version number for WPASDK.
FOUNDATION_EXPORT double WPASDKVersionNumber;

//! Project version string for WPASDK.
FOUNDATION_EXPORT const unsigned char WPASDKVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <WPASDK/PublicHeader.h>


@interface WPASDK : NSObject

/*
 wpaActive       Wpa is Active?
 */
@property BOOL wpaActive;
/*
 openActive      Open is Active?
 */
@property BOOL openActive;
/*
 username       Username to track connections
 */
@property NSString *username;
/*
 minTime       minTime to update bd
 */
@property long minTime;
/*
 maxTime       maxTime of Geohash for update hotspot
 */
@property long maxTime;
/*
 geohashLenght geohashLengh Lengh of Geohash
 */
@property int geohashLength;
/*
 ssidRadius    Radius to search Hotspot by ssid
 */
@property double ssidRadius;

/*!
 *  Init Library
 *
 *  @param apiKey    ApiKey to access
 *  @param clientID       clientID to access
 *  @param clientSecret       clientSecret to access
 */
- (instancetype)initWithApiKey:(NSString*) apiKey clientID:(NSString*)clientID clientSecret:(NSString*) clientSecret;

/*!
 *  Download hotspots from backend
 *
 *  @return nil if downloading is started NSError if minTime or maxTime not passed
 */
-(NSError*)updateHotspots;

@end

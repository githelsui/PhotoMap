//
//  LocationsViewControllerDelegate.h
//  PhotoMap
//
//  Created by Githel Lynn Suico on 7/8/20.
//  Copyright © 2020 Codepath. All rights reserved.
//

#import <Foundation/Foundation.h>
NS_ASSUME_NONNULL_BEGIN
@class LocationsViewController;

@protocol LocationsViewControllerDelegate <NSObject>

- (void)locationsViewController:(LocationsViewController *)controller didPickLocationWithLatitude:(NSNumber *)latitude longitude:(NSNumber *)longitude;

@end


NS_ASSUME_NONNULL_END

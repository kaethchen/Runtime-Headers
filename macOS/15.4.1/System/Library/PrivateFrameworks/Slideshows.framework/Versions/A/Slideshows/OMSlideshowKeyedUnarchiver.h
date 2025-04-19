@class NSArray;
@protocol OMSlideshowMediaItemLookupDelegate;

@interface OMSlideshowKeyedUnarchiver : NSKeyedUnarchiver

@property (nonatomic) NSArray *mediaURLs;
@property (nonatomic) id<OMSlideshowMediaItemLookupDelegate> mediaItemLookupDelegate;

@end

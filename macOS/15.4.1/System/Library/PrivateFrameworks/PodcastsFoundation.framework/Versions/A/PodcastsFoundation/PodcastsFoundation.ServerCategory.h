@class NSString, NSNumber, NSSet;
@protocol MTFeedCategory;

@interface PodcastsFoundation.ServerCategory : _TtCs12_SwiftObject <MTFeedCategory, PodcastsFoundation.MediaObject> {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ attributes;
    void /* unknown type, empty encoding */ relationships;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSNumber *artworkHeight;
@property (nonatomic, readonly) NSNumber *artworkWidth;
@property (nonatomic, readonly) NSString *artworkPrimaryColor;
@property (nonatomic, readonly) NSString *artworkTemplateURL;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *url;
@property (nonatomic, readonly) NSString *color;
@property (nonatomic, readonly) id<MTFeedCategory> parent;
@property (nonatomic, readonly) NSSet *children;
@property (nonatomic, readonly) NSString *id;
@property (nonatomic, readonly) NSString *type;

@end

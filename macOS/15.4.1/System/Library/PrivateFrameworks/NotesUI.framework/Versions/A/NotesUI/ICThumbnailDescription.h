@class NSSet, NSImage, ICThumbnailConfiguration, NSError, NSDate;

@interface ICThumbnailDescription : NSObject

@property (readonly, nonatomic) ICThumbnailConfiguration *configuration;
@property (copy, nonatomic) NSDate *creationDate;
@property (nonatomic, getter=isCached) BOOL cached;
@property (nonatomic) double fetchDuration;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSImage *image;
@property (nonatomic) unsigned long long imageScaling;
@property (readonly, nonatomic) long long preferredLayerContentsPlacement;
@property (nonatomic) long long thumbnailDecorationType;
@property (retain, nonatomic) NSSet *associatedObjectIdentifiers;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;

@end

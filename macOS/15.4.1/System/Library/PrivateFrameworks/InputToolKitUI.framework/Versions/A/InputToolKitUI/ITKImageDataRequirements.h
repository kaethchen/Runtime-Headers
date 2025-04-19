@class NSString;

@interface ITKImageDataRequirements : NSObject

@property (class, readonly, nonatomic) ITKImageDataRequirements *stickerRequirements;
@property (class, readonly, nonatomic) ITKImageDataRequirements *stickerThumbnailRequirements;

@property (copy, nonatomic) NSString *uti;
@property (nonatomic) unsigned long long maxLength;
@property (nonatomic) unsigned long long minLength;
@property (nonatomic) unsigned long long maxDataLength;

- (void).cxx_destruct;

@end

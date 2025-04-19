@class NSDictionary, NSURL, QLThumbnailItem;

@interface QLFileThumbnailRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct CGSize { double width; double height; } maximumSize;
@property (nonatomic) struct CGSize { double width; double height; } minimumSize;
@property (nonatomic) double scale;
@property (retain, nonatomic) QLThumbnailItem *item;
@property (retain, nonatomic) NSDictionary *options;
@property (retain, nonatomic) NSDictionary *generationData;
@property (readonly, copy, nonatomic) NSURL *fileURL;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)contentType;
- (unsigned long long)badgeType;
- (BOOL)wantsLowQuality;
- (int)iconFlavor;
- (id)initWithItem:(id)a0 maximumSize:(struct CGSize { double x0; double x1; })a1 minimumSize:(double)a2 scale:(double)a3 options:(id)a4 generationData:(id)a5;
- (int)interpolationQuality;
- (BOOL)thirdPartyVideoDecodersAllowed;

@end

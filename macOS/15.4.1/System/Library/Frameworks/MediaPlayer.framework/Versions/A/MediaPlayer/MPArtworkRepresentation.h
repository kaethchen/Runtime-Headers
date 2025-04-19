@class NSImage, AVAsset, NSString;

@interface MPArtworkRepresentation : NSObject

@property (nonatomic) long long kind;
@property (retain, nonatomic) NSImage *image;
@property (nonatomic, getter=isImagePrepared) BOOL imagePrepared;
@property (retain, nonatomic) AVAsset *video;
@property (nonatomic) struct CGSize { double width; double height; } representationSize;
@property (retain, nonatomic) id representationToken;
@property (readonly, copy, nonatomic) NSString *visualIdenticalityStringRepresentation;

+ (id)representationForVisualIdentity:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 image:(id)a2;
+ (id)representationForVisualIdentity:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 video:(id)a2;
+ (id)representationWithSize:(struct CGSize { double x0; double x1; })a0 image:(id)a1;
+ (id)representationWithSize:(struct CGSize { double x0; double x1; })a0 video:(id)a1;

- (void).cxx_destruct;
- (id)debugQuickLookObject;

@end

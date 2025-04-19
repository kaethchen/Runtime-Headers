@class IPAColorProfile, NSString, PACompositionEditController, NSUUID, NSError, NSArray;
@protocol NUScalePolicy, PFCanceler;

@interface PAImageRenderRequest : NSObject <NSCopying>

@property (retain) NSError *error;
@property (copy) NSString *name;
@property (retain) id<NUScalePolicy> scalePolicy;
@property (retain) IPAColorProfile *colorProfile;
@property (retain) id<PFCanceler> canceler;
@property BOOL bakeOrientation;
@property (retain) PACompositionEditController *compositionProvider;
@property (copy) NSUUID *adjustmentUUID;
@property (readonly) NSString *adjustmentIdentifier;
@property (copy) NSString *adjustmentKey;
@property (copy) NSArray *adjustmentValues;

+ (id)cancelRequestError;
+ (id)invalidRequestError:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)validate;
- (unsigned long long)numberOfImages;
- (BOOL)isCanceled;
- (void)submit:(id)a0 handler:(id /* block */)a1;
- (id)compositionForImageAtIndex:(unsigned long long)a0;

@end

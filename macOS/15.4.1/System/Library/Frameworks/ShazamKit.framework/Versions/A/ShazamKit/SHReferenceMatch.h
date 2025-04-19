@class SHSignature, NSArray;

@interface SHReferenceMatch : NSObject

@property (readonly) SHSignature *signature;
@property (readonly) NSArray *mediaItems;

- (void).cxx_destruct;
- (id)initWithSignature:(id)a0 mediaItems:(id)a1;

@end

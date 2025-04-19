@class NSString, NSDate;

@interface PHAssetResourceCreationOptions : NSObject <NSCopying>

@property (retain, nonatomic) NSDate *alternateImportImageDate;
@property (nonatomic) BOOL shouldIngestInPlace;
@property (nonatomic) int burstPickType;
@property (retain, nonatomic) NSString *forcePairingIdentifier;
@property (copy, nonatomic) NSString *originalFilename;
@property (copy, nonatomic) NSString *uniformTypeIdentifier;
@property (nonatomic) BOOL shouldMoveFile;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithPropertyListRepresentation:(id)a0;
- (id)propertyListRepresentation;
- (BOOL)ensureOptionsAreCompleteForURL:(id)a0;

@end

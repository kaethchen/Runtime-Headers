@class NSUUID, NSDictionary, NSString, NSArray, NSNumber;

@interface BKSSymbolOwner : NSObject

@property (readonly, nonatomic) NSNumber *_textSegmentOffsetFromSymbolOwnerStart;
@property (readonly, nonatomic) NSDictionary *segmentNameToSegment;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *architecture;
@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSString *bundleShortVersion;
@property (readonly, nonatomic) NSString *bundleVersion;
@property (readonly, nonatomic) NSString *projectName;
@property (readonly, nonatomic) NSString *sourceVersion;
@property (readonly, nonatomic) NSNumber *sizeInBytes;
@property (readonly, nonatomic) NSNumber *linesCount;
@property (readonly, nonatomic) NSNumber *symbolCount;
@property (readonly, nonatomic) NSDictionary *variantDictionary;
@property (readonly, nonatomic) NSNumber *defaultSymbolOwnerStartAddress;
@property (readonly, nonatomic) NSNumber *defaultMachHeaderLoadAddress;
@property (readonly, nonatomic) NSArray *sortedSegments;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_defaultSymbolOwnerStartAddressFromSegmentDictionary:(id)a0;
- (id)initWithSymbolOwnerInfoDict:(id)a0 uuid:(id)a1;
- (id)offsetIntoSegmentForRequest:(id)a0;
- (id)segmentForOffsetFromStartAddress:(unsigned long long)a0;

@end

@class NSNumber, NSString;

@interface MTRRVCOperationalStateClusterErrorStateStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *errorStateID;
@property (copy, nonatomic) NSString *errorStateLabel;
@property (copy, nonatomic) NSString *errorStateDetails;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end

@class NSString, NSDate;

@interface WFWorkflowQuarantine : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *sourceAppIdentifier;
@property (readonly, nonatomic) NSDate *importDate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)serializedRepresentation;
- (id)serializedData;
- (id)initWithSerializedData:(id)a0;
- (id)initWithSourceAppIdentifier:(id)a0 importDate:(id)a1;

@end

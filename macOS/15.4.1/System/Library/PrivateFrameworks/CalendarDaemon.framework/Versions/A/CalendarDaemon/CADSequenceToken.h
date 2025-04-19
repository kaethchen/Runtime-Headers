@class NSDictionary;

@interface CADSequenceToken : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *allDBSequenceMap;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAllDBSequenceMap:(id)a0;
- (int)sequenceForDatabaseID:(int)a0;
- (id)initWithSerializedSequenceString:(id)a0;
- (id)serializedSequenceString;
- (id)initWithMainDBSequence:(int)a0;
- (int)mainDBSequence;

@end

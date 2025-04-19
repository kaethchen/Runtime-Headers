@class NSArray;

@interface PPExtractionSet : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *namedEntityRecords;
@property (readonly, nonatomic) NSArray *topicRecords;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)merge:(id)a0;
- (id)initWithNamedEntityRecords:(id)a0 topicRecords:(id)a1;

@end

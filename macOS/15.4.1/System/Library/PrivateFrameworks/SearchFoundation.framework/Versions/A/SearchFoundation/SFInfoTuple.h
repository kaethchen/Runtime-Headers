@class NSString, NSArray, NSDictionary, NSData;

@interface SFInfoTuple : NSObject <SFInfoTuple, NSSecureCoding, NSCopying> {
    struct { unsigned char initiallyVisibleValues : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSArray *values;
@property (nonatomic) unsigned long long initiallyVisibleValues;
@property (copy, nonatomic) NSString *showMoreString;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (BOOL)hasInitiallyVisibleValues;

@end

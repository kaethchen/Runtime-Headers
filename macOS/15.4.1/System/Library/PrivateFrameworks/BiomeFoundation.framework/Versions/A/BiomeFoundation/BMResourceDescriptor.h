@class NSString;

@interface BMResourceDescriptor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) NSString *value;

+ (id)_illegalCharactersSet;
+ (BOOL)_validateInput:(id)a0 description:(id)a1 error:(id *)a2;
+ (id)descriptorsFromEncodedString:(id)a0 error:(id *)a1;
+ (id)encodedStringFromDescriptors:(id)a0 error:(id *)a1;
+ (BOOL)enumerateDescriptorsFromEncodedString:(id)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
+ (id)sortedDescriptorsDetectingDuplicates:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)encodedString;
- (id)initWithKey:(id)a0 value:(id)a1 error:(id *)a2;
- (id)initWithEncodedString:(id)a0 error:(id *)a1;

@end

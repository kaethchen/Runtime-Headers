@class NSString;

@interface AFSpeechSynthesisRecord : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *utterance;
@property (readonly, nonatomic) unsigned long long beginTimestamp;
@property (readonly, nonatomic) unsigned long long endTimestamp;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithBuilder:(id /* block */)a0;
- (id)initWithUtterance:(id)a0 beginTimestamp:(unsigned long long)a1 endTimestamp:(unsigned long long)a2;
- (id)mutatedCopyWithMutator:(id /* block */)a0;

@end

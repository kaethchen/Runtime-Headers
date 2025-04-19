@class NSIndexSet, NSString;

@interface EARVoiceCommandArgument : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) char presence;
@property (readonly, copy, nonatomic) NSIndexSet *indexes;
@property (readonly, copy, nonatomic) NSIndexSet *adpositionIndexes;
@property (readonly, copy, nonatomic) NSString *text;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPresence:(char)a0 indexes:(id)a1 adpositionIndexes:(id)a2;
- (id)initWithPresence:(char)a0 indexes:(id)a1 adpositionIndexes:(id)a2 text:(id)a3;
- (id)initWithPresence:(char)a0 text:(id)a1;

@end

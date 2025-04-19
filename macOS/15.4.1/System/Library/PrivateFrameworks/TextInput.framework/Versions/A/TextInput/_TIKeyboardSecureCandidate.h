@class NSString;

@interface _TIKeyboardSecureCandidate : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *secureHeader;
@property (readonly, nonatomic) NSString *secureContent;
@property (readonly, nonatomic) NSString *secureFormattedContent;
@property (readonly, nonatomic) NSString *input;
@property (readonly, nonatomic) NSString *truncationSentinel;
@property (readonly, nonatomic) unsigned long long candidateHash;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSecureHeader:(id)a0 secureContent:(id)a1 secureFormattedContent:(id)a2 input:(id)a3 truncationSentinel:(id)a4;

@end

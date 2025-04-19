@class NSData, NSMutableArray;

@interface KextAuditIntelBootSession : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned char csrStatus;
@property unsigned int csrConfig;
@property unsigned int imkTypeTag;
@property BOOL sipStatus;
@property BOOL secureBoot;
@property BOOL valid;
@property (retain) NSData *kernelCDHash;
@property (retain) NSMutableArray *kexts;
@property (retain) NSMutableArray *errors;
@property (readonly) int instanceTag;

- (id)init;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)dictionary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)reset;
- (void)invalidate:(id)a0;
- (int)addKext:(id)a0;
- (BOOL)hasKernel;
- (id)initAsValid:(BOOL)a0 withKernelHash:(id)a1 andKexts:(id)a2 andErrors:(id)a3 andSIPStatus:(BOOL)a4 andSecureBootStatus:(BOOL)a5 andCSRConfigStatus:(unsigned char)a6 andCSRConfig:(unsigned int)a7 andTypeTag:(unsigned int)a8;
- (BOOL)xpcDictionary:(id *)a0;

@end

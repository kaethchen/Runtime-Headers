@class NSString, NSUUID, NSNumber;

@interface TIKeyboardCandidateSingle : TIKeyboardCandidate {
    unsigned int _sourceMask;
}

@property (copy, nonatomic) NSString *candidate;
@property (copy, nonatomic) NSString *input;
@property (copy, nonatomic) NSString *rawInput;
@property (nonatomic) long long cursorMovement;
@property (copy, nonatomic) NSString *applicationKey;
@property (copy, nonatomic) NSString *applicationBundleId;
@property (copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSUUID *stickerIdentifier;
@property (nonatomic) unsigned long long learningFlagsMask;
@property (copy, nonatomic) NSNumber *learningFlags;
@property (nonatomic, getter=isExtensionCandidate) BOOL extensionCandidate;
@property (nonatomic, getter=isContinuousPathConversion) BOOL continuousPathConversion;
@property (nonatomic, getter=shouldAccept) BOOL shouldAccept;

+ (BOOL)supportsSecureCoding;
+ (int)type;
+ (id)secureCandidateForInput:(id)a0 slotID:(unsigned int)a1;
+ (id)candidateWithCandidate:(id)a0 forInput:(id)a1;
+ (id)candidateWithCandidate:(id)a0 forInput:(id)a1 cursorMovement:(long long)a2;
+ (id)candidateWithCandidate:(id)a0 forInput:(id)a1 customInfoType:(unsigned long long)a2;
+ (id)candidateWithCandidate:(id)a0 forInput:(id)a1 extensionCandidate:(BOOL)a2;
+ (id)candidateWithCandidate:(id)a0 forInput:(id)a1 property:(unsigned long long)a2;
+ (id)candidateWithUnchangedInput:(id)a0;
+ (id)candidateWithUnchangedInput:(id)a0 learningFlagsMask:(unsigned long long)a1;
+ (id)secureCandidateForInput:(id)a0 slotID:(unsigned int)a1 customInfoType:(unsigned long long)a2;
+ (id)secureCandidateForInput:(id)a0 slotID:(unsigned int)a1 customInfoType:(unsigned long long)a2 applicationKey:(id)a3 applicationBundleId:(id)a4 altDSID:(id)a5;
+ (id)secureCandidateWithCandidate:(id)a0 forInput:(id)a1 slotID:(unsigned int)a2 customInfoType:(unsigned long long)a3 stickerIdentifier:(id)a4;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCandidate:(id)a0;
- (id)candidateByReplacingWithCandidate:(id)a0;
- (id)candidateByReplacingWithCandidate:(id)a0 input:(id)a1;
- (id)candidateByReplacingWithCandidate:(id)a0 input:(id)a1 rawInput:(id)a2;
- (id)candidateByReplacingWithSourceMask:(unsigned int)a0;
- (void)encodeWithCandidateResultSetCoder:(id)a0;
- (id)initWithCandidate:(id)a0 forInput:(id)a1;
- (id)initWithCandidate:(id)a0 forInput:(id)a1 rawInput:(id)a2;
- (id)initWithCandidate:(id)a0 forInput:(id)a1 rawInput:(id)a2 extensionCandidate:(BOOL)a3;
- (id)initWithCandidate:(id)a0 forInput:(id)a1 rawInput:(id)a2 extensionCandidate:(BOOL)a3 sourceMask:(unsigned int)a4 learningFlagsMask:(unsigned long long)a5;
- (id)initWithCandidate:(id)a0 forInput:(id)a1 rawInput:(id)a2 learningFlagsMask:(unsigned long long)a3;
- (id)initWithCandidate:(id)a0 forInput:(id)a1 rawInput:(id)a2 sourceMask:(unsigned int)a3;
- (id)initWithCandidate:(id)a0 forInput:(id)a1 rawInput:(id)a2 sourceMask:(unsigned int)a3 learningFlagsMask:(unsigned long long)a4;
- (id)initWithCandidateResultSetCoder:(id)a0;
- (id)initWithResponseCandidate:(id)a0;
- (id)initWithUnchangedInput:(id)a0;
- (id)initWithUnchangedInput:(id)a0 learningFlagsMask:(unsigned long long)a1;
- (BOOL)isAutocorrectionIgnoringCaseAndDiacriticsAndSupplementalItemPrefix;
- (BOOL)isAutocorrectionIgnoringCaseAndSupplementalItemPrefix;
- (BOOL)isHideMyEmailType;
- (BOOL)isStickerCandidate;
- (void)setSourceMask:(unsigned int)a0;
- (unsigned int)sourceMask;

@end

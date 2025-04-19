@class NSNumber, NSString;

@interface TIMecabraCandidate : TIKeyboardCandidate {
    BOOL _emojiCandidate;
    BOOL _extensionCandidate;
    BOOL _isForShortcutConversion;
    BOOL _isAutocorrection;
    BOOL _OTAWordListCandidate;
    BOOL _regionalCandidate;
    BOOL _responseKitCandidate;
    BOOL _bilingualCandidate;
    BOOL _asIsCandidate;
    BOOL _partialCandidate;
    BOOL _wubixingConvertedByPinyin;
    BOOL _prefixMatched;
    unsigned int _sourceMask;
    NSString *_candidate;
    NSString *_latinCandidate;
    NSString *_input;
    NSString *_rawInput;
    unsigned long long _deleteCount;
    long long _cursorMovement;
    NSString *_responseKitCategory;
}

@property (retain, nonatomic) NSNumber *mecabraCandidatePointerValue;
@property (nonatomic, getter=isContinuousPathConversion) BOOL continuousPathConversion;
@property (nonatomic, getter=shouldAccept) BOOL shouldAccept;
@property (nonatomic, getter=shouldInsertSpaceAfterSelection) BOOL shouldInsertSpaceAfterSelection;
@property (nonatomic) float seq2seqScore;
@property (nonatomic) float lmScore;
@property (readonly, nonatomic) unsigned short flags;
@property (readonly, nonatomic) BOOL singlePhrase;

+ (BOOL)supportsSecureCoding;
+ (int)type;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)label;
- (id)candidate;
- (id)input;
- (BOOL)isEmojiCandidate;
- (unsigned long long)deleteCount;
- (BOOL)isAsIsCandidate;
- (BOOL)isPrefixMatched;
- (id)candidateByReplacingWithCandidate:(id)a0;
- (id)candidateByReplacingWithCandidate:(id)a0 input:(id)a1;
- (id)candidateByReplacingWithCandidate:(id)a0 input:(id)a1 rawInput:(id)a2;
- (id)candidateByReplacingWithSourceMask:(unsigned int)a0;
- (long long)cursorMovement;
- (void)encodeWithCandidateResultSetCoder:(id)a0;
- (id)initWithCandidate:(id)a0 forInput:(id)a1 latinCandidate:(id)a2 mecabraCandidatePointerValue:(id)a3 withFlags:(unsigned short)a4;
- (id)initWithCandidate:(id)a0 forInput:(id)a1 latinCandidate:(id)a2 mecabraCandidatePointerValue:(id)a3 withFlags:(unsigned short)a4 deleteCount:(unsigned long long)a5 cursorMovement:(long long)a6;
- (id)initWithCandidate:(id)a0 forInput:(id)a1 mecabraCandidatePointerValue:(id)a2 withFlags:(unsigned short)a3;
- (id)initWithCandidate:(id)a0 forInput:(id)a1 mecabraCandidatePointerValue:(id)a2 withFlags:(unsigned short)a3 deleteCount:(unsigned long long)a4 cursorMovement:(long long)a5;
- (id)initWithCandidateResultSetCoder:(id)a0;
- (id)initWithResponseKitString:(id)a0 responseKitCategory:(id)a1 mecabraCandidatePointerValue:(id)a2;
- (id)initWithSurface:(id)a0 input:(id)a1 mecabraCandidatePointerValue:(id)a2;
- (BOOL)isAutocorrection;
- (BOOL)isBilingualCandidate;
- (BOOL)isExtensionCandidate;
- (BOOL)isForShortcutConversion;
- (BOOL)isFullwidthCandidate;
- (BOOL)isMecabraCandidate;
- (BOOL)isOTAWordListCandidate;
- (BOOL)isPartialCandidate;
- (BOOL)isRegionalCandidate;
- (BOOL)isResponseKitCandidate;
- (BOOL)isWubixingConvertedByPinyin;
- (id)latinCandidate;
- (id)rawInput;
- (id)responseKitCategory;
- (void)setSourceMask:(unsigned int)a0;
- (unsigned int)sourceMask;

@end

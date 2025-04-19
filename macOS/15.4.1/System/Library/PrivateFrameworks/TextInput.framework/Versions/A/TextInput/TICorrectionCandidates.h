@class NSArray, TIKeyboardCandidate;

@interface TICorrectionCandidates : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) TIKeyboardCandidate *autocorrection;
@property (readonly, nonatomic) NSArray *alternateCorrections;
@property (readonly, nonatomic) BOOL autocorrectionBlocked;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAutocorrection:(id)a0 alternateCorrections:(id)a1;
- (id)initWithAutocorrection:(id)a0 alternateCorrections:(id)a1 autocorrectionBlocked:(BOOL)a2;

@end

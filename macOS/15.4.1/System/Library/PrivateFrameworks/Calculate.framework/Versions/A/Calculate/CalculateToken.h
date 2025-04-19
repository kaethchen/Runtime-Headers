@class NSString, UnitRanks;

@interface CalculateToken : NSObject

@property (retain, nonatomic) NSString *normalizedText;
@property (nonatomic) BOOL needsWhitespaceAfter;
@property (nonatomic) BOOL loadedNeedsWhitespaceAfter;
@property (nonatomic) int characterType;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly, nonatomic) unsigned long long tokenType;
@property (readonly, nonatomic) NSString *text;
@property (retain, nonatomic) UnitRanks *ranks;
@property (readonly) BOOL isOperand;
@property (readonly) BOOL isOperator;
@property (readonly) BOOL isOpen;
@property (readonly) BOOL isMaybeX;
@property (readonly) BOOL isPotentialVariable;
@property (readonly) BOOL isAnyUnknown;

+ (id)tokenWithType:(unsigned long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 text:(id)a2 ranks:(id)a3;
+ (BOOL)isOpen:(unsigned long long)a0;
+ (BOOL)isClose:(unsigned long long)a0;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)setTokenType:(unsigned long long)a0;
- (BOOL)isClose;
- (id)initWithType:(unsigned long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 text:(id)a2 ranks:(id)a3;
- (BOOL)isXVariable;

@end

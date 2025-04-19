@class NSString, NSMutableDictionary;

@interface NSProgressValues : NSObject <NSSecureCoding> {
    NSMutableDictionary *_userInfo;
    struct _NSProgressFraction { long long completed; long long total; BOOL overflowed; } _selfFraction;
    struct _NSProgressFraction { long long completed; long long total; BOOL overflowed; } _childFraction;
    double _remoteFractionCompleted;
    NSString *_localizedDescription;
    NSString *_localizedAdditionalDescription;
    NSString *_kind;
    long long _portionOfParent;
    BOOL _isCancellable;
    BOOL _isPausable;
    BOOL _isCancelled;
    BOOL _isPaused;
    BOOL _usingChildUserInfo;
    BOOL _isPrioritizable;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)_importantKeys;
+ (id)decodableClasses;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (double)fractionCompleted;
- (void)setCompletedUnitCount:(long long)a0;
- (void)setTotalUnitCount:(long long)a0;
- (BOOL)isIndeterminate;
- (struct _NSProgressFraction { long long x0; long long x1; BOOL x2; })overallFraction;
- (id)_indentedDescription:(unsigned long long)a0;
- (long long)completedUnitCount;
- (BOOL)isFinished;
- (void)setFinished:(BOOL)a0;
- (void)setFractionCompleted:(double)a0;
- (void)setIndeterminate:(BOOL)a0;
- (long long)totalUnitCount;

@end

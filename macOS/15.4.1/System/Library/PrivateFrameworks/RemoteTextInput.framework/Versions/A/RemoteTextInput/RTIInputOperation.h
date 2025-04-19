@class NSString, NSObject, TIKeyboardInput;
@protocol NSSecureCoding;

@interface RTIInputOperation : NSObject <NSSecureCoding, RTICustomDataProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isScrollingInputOperation;
@property (readonly, nonatomic) unsigned long long scrollType;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } contentTransform;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } environmentTransform;
@property (retain, nonatomic) TIKeyboardInput *keyboardInput;
@property (nonatomic) SEL actionSelector;
@property (nonatomic) int inputModality;
@property (retain, nonatomic) NSString *customInfoType;
@property (retain, nonatomic) NSObject<NSSecureCoding> *customInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)_scrollTypeForString:(id)a0;
+ (id)_stringForScrollType:(unsigned long long)a0;
+ (void)registerClassesForScrollingInputOperations;
+ (void)registerCustomInfoClasses:(id)a0 forType:(id)a1;
+ (id)scrollingInputOperationWithType:(unsigned long long)a0 contentTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 environmentTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;
+ (void)unregisterClassesForScrollingInputOperations;
+ (void)unregisterCustomInfoType:(id)a0;

@end

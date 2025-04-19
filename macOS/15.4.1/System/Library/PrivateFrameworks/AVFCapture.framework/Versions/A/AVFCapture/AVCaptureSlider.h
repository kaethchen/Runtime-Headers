@class NSString, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface AVCaptureSlider : AVCaptureControl {
    float _minValue;
    float _maxValue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _actionLock;
}

@property (copy, nonatomic) id /* block */ action;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *actionQueue;
@property (nonatomic) float value;
@property (copy, nonatomic) NSString *localizedValueFormat;
@property (copy, nonatomic) NSString *valueFormat;
@property (copy, nonatomic) NSArray *prominentValues;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, copy, nonatomic) NSString *symbolName;
@property (copy, nonatomic) NSString *accessibilityIdentifier;

+ (void)initialize;

- (void)dealloc;
- (id)description;
- (id)initWithLocalizedTitle:(id)a0 symbolName:(id)a1 minValue:(float)a2 maxValue:(float)a3;
- (id)initWithLocalizedTitle:(id)a0 symbolName:(id)a1 minValue:(float)a2 maxValue:(float)a3 step:(float)a4;
- (id)initWithLocalizedTitle:(id)a0 symbolName:(id)a1 values:(id)a2;
- (void)setActionQueue:(id)a0 action:(id /* block */)a1;
- (void)setLocalizedValueValueFormat:(id)a0;

@end

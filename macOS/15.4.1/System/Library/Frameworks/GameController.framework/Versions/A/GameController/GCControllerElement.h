@class NSString, NSSet, NSMutableSet;
@protocol GCDevice;

@interface GCControllerElement : NSObject {
    NSMutableSet *_aliases;
}

@property (weak, nonatomic) id<GCDevice> device;
@property (weak, nonatomic) GCControllerElement *collection;
@property BOOL updatePending;
@property float pendingValue;
@property (retain, nonatomic) NSString *primaryAlias;
@property (nonatomic) float deadzone;
@property (nonatomic) BOOL remappable;
@property (nonatomic) int remappingKey;
@property (nonatomic) BOOL mappableToSystemGestures;
@property (nonatomic, getter=isBoundToSystemGesture) BOOL boundToSystemGesture;
@property (retain, nonatomic) NSString *unmappedNameLocalizationKey;
@property (retain, nonatomic) NSString *nameLocalizationKey;
@property (readonly, nonatomic, getter=isAnalog) BOOL analog;
@property (nonatomic) long long preferredSystemGestureState;
@property (retain, nonatomic) NSString *sfSymbolsName;
@property (retain, nonatomic) NSString *localizedName;
@property (retain, nonatomic) NSString *unmappedSfSymbolsName;
@property (retain, nonatomic) NSString *unmappedLocalizedName;
@property (readonly, copy, nonatomic) NSSet *aliases;

- (id)init;
- (void).cxx_destruct;
- (float)value;
- (BOOL)_setValue:(float)a0;
- (void)setAliases:(id)a0;
- (BOOL)_commitPendingValueOnQueue:(id)a0;
- (void)_resetPendingValue;
- (void)_setPendingValue:(float)a0;
- (BOOL)_setPendingValueIfChanged:(float)a0;
- (BOOL)_setValue:(float)a0 queue:(id)a1;
- (int)getAndResetTimesPressed;

@end

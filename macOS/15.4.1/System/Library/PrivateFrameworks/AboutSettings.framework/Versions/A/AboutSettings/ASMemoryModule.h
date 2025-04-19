@class NSString, NSBundle;

@interface ASMemoryModule : NSObject

@property (copy, nonatomic) NSBundle *bundle;
@property (readonly) NSString *displayName;
@property (readonly) NSString *slotName;
@property (readonly) NSString *dimmType;
@property (readonly) NSString *dimmSize;
@property (readonly) NSString *dimmStatus;
@property (readonly) BOOL isPopulated;

- (void).cxx_destruct;
- (id)localizedString:(id)a0;
- (id)initWithModuleInfo:(id)a0 usesECC:(BOOL)a1 fromDocument:(id)a2;

@end

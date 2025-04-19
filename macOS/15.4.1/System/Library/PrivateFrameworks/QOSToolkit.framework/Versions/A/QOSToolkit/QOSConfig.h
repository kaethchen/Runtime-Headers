@class QOSConfigInternal;

@interface QOSConfig : NSObject

@property (readonly) QOSConfigInternal *underlyingObject;

- (void).cxx_destruct;
- (id)locale;
- (long long)appTarget;
- (id)initWithAppTarget:(long long)a0 locale:(id)a1;

@end

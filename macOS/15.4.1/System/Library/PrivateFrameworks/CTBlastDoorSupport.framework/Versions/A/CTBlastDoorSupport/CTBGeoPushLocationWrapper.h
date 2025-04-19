@interface CTBGeoPushLocationWrapper : NSObject

@property (readonly, nonatomic) struct optional<ctb::GeoPushLocation> { union { char __null_state_; struct GeoPushLocation { double fLatitude; double fLongitude; } __val_; } ; BOOL __engaged_; } wrapped;

- (id).cxx_construct;
- (id)initWithWrapped:(struct optional<ctb::GeoPushLocation> { union { char x0; struct GeoPushLocation { double x0; double x1; } x1; } x0; BOOL x1; })a0;

@end

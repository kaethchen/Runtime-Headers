@class NSString;

@interface PXScrollDetent : NSObject {
    void /* unknown type, empty encoding */ identifier;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ offset;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ availableForScrollingGesture;
@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 offset:(double)a1 availableForScrollingGesture:(BOOL)a2;

@end

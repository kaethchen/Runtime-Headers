@interface _NSTrackingRegionKey : NSObject {
    long long _trackingID;
    unsigned int _windowID;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithTrackingID:(long long)a0 windowID:(unsigned int)a1;

@end

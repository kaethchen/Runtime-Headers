@interface NSWindowGraphicsContext : NSCGSContext {
    unsigned int _cgsWindowID;
}

- (id)attributes;
- (id)initWithWindow:(id)a0;
- (id)_initWithWindowNumber:(long long)a0;
- (BOOL)isDrawingToScreen;
- (unsigned int)windowID;

@end

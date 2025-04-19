@class NSString;

@interface OSAControlElement : OSAScriptElement {
    NSString *_controlName;
}

+ (id)elementWithName:(id)a0 text:(id)a1;

- (void)dealloc;
- (id)initWithName:(id)a0;
- (void)setControlName:(id)a0;
- (id)controlName;
- (BOOL)generateIntoText:(id)a0 indent:(unsigned int)a1;
- (id)initWithName:(id)a0 text:(id)a1;

@end

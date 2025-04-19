@class NSString;

@interface AVAudioHardwareSelectorItem : NSObject {
    struct SelectorControlItem { void /* function */ **_vptr$Base; unsigned int _has_bits[1]; struct xstring { void *mUnused; struct __CFString *mCFString; } _name; unsigned int _ID; unsigned int _kind; } _serverState;
}

@property (readonly, nonatomic) unsigned long long ID;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int kind;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithServerState:(const struct SelectorControlItem { void /* function */ **x0; unsigned int x1[1]; struct xstring { void *x0; struct __CFString *x1; } x2; unsigned int x3; unsigned int x4; } *)a0;

@end

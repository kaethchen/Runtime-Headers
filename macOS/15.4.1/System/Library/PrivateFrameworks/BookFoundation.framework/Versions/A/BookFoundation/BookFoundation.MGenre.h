@class NSString;

@interface BookFoundation.MGenre : BookFoundation.MResource <BFMGenre> {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ url;
}

@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;

@end

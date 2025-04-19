@class NSString;

@interface CoreHapticsTools.CHTEvent : NSObject {
    void /* unknown type, empty encoding */ undoRedoManager;
    void /* unknown type, empty encoding */ observerManager;
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ _time;
}

@property (nonatomic, copy) NSString *type;

- (id)init;
- (void).cxx_destruct;

@end

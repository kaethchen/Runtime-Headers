@class NSString;

@interface ChronoKit.WidgetEntry : NSObject <BSInvalidatable> {
    void /* unknown type, empty encoding */ protectionType;
    void /* unknown type, empty encoding */ key;
    void /* unknown type, empty encoding */ entrySupportsRendering;
    void /* unknown type, empty encoding */ _lock;
    void /* unknown type, empty encoding */ _lock_cachedViewableEntry;
    void /* unknown type, empty encoding */ _lock_configuredDate;
    void /* unknown type, empty encoding */ _lock_shouldSilencePublisher;
    void /* unknown type, empty encoding */ _lock_currentEntry;
    void /* unknown type, empty encoding */ _environmentProvider;
    void /* unknown type, empty encoding */ _lock_content;
    void /* unknown type, empty encoding */ _lock_contentLoadErrorDate;
    void /* unknown type, empty encoding */ _lock_contentLoadError;
    void /* unknown type, empty encoding */ _objectWillChangePublisher;
    void /* unknown type, empty encoding */ objectWillChange;
    void /* unknown type, empty encoding */ _contentDidChangePublisher;
    void /* unknown type, empty encoding */ contentDidChangePublisher;
    void /* unknown type, empty encoding */ _descriptorDidChangePublisher;
    void /* unknown type, empty encoding */ descriptorDidChangePublisher;
    void /* unknown type, empty encoding */ _lock_descriptor;
    void /* unknown type, empty encoding */ descriptorObserver;
}

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;

@end

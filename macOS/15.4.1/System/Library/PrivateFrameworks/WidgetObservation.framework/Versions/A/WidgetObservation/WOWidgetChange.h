@class NSUUID, NSString, WOWidget;

@interface WOWidgetChange : NSObject {
    void /* unknown type, empty encoding */ _impl;
}

@property (nonatomic, readonly) unsigned long long kind;
@property (nonatomic, readonly) NSUUID *widgetIdentfier;
@property (nonatomic, readonly) NSUUID *widgetIdentifier;
@property (nonatomic, readonly) WOWidget *widget;
@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;

@end

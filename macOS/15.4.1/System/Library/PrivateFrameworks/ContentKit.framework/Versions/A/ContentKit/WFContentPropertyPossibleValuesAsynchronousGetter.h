@class NSString;

@interface WFContentPropertyPossibleValuesAsynchronousGetter : NSObject <WFContentPropertyPossibleValuesGetter> {
    id /* block */ _getter;
}

@property (readonly, nonatomic, getter=isAsynchronous) BOOL asynchronous;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

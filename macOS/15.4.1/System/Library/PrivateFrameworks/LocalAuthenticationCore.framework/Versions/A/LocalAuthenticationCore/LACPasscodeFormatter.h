@class NSNumberFormatter;

@interface LACPasscodeFormatter : NSObject {
    NSNumberFormatter *_formatter;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)localizePasscode:(id)a0 type:(long long)a1;

@end

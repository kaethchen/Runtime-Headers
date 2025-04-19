@class HDProfile, NSISO8601DateFormatter;

@interface HDNotificationInstructionDiagnostics : NSObject {
    HDProfile *_profile;
    NSISO8601DateFormatter *_formatter;
}

- (void).cxx_destruct;
- (id)initWithProfile:(id)a0;
- (BOOL)enumerateAllNotificationInstructionsWithError:(id *)a0 enumerationHandler:(id /* block */)a1;

@end

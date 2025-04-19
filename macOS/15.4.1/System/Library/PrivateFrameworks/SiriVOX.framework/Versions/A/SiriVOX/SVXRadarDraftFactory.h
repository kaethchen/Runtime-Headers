@class NSString, NSISO8601DateFormatter;

@interface SVXRadarDraftFactory : NSObject {
    NSString *_timeZone;
    NSISO8601DateFormatter *_ttrTimeFormatter;
}

- (id)init;
- (void).cxx_destruct;
- (id)createWithRequiredContent:(id)a0 extraContent:(id)a1;

@end

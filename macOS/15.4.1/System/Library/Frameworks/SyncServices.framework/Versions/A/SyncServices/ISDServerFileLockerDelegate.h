@interface ISDServerFileLockerDelegate : NSObject

+ (id)instance;

- (void)fileLocker:(id)a0 lockWasStolen:(id)a1;
- (int)fileLocker:(id)a0 actionForApparentlyAbandonedLock:(id)a1 onAttempt:(int)a2;

@end

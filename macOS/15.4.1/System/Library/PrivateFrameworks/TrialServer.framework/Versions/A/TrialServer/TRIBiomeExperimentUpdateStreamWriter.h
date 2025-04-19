@interface TRIBiomeExperimentUpdateStreamWriter : NSObject

+ (void)clearExperimentUpdatesStream;
+ (void)deleteObsoleteEventsFromExperimentsUpdateStream;
+ (void)writeExperimentUpdateWithRecord:(id)a0 withExperimentStateIsActive:(BOOL)a1 withUserId:(id)a2;

@end

@interface ATXHeuristicActionProducer : NSObject {
    id _expireNotificationHandle;
}

+ (id)sharedInstance;
+ (unsigned long long)actionExperienceForScoredHeuristicAction:(id)a0;
+ (double)generateScoreForHeuristic:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (id)_criteriaForJobOnDate:(id)a0;
- (id)actionPredictionBlacklist;
- (id)bundleIdForAction:(id)a0;
- (void)coalescedProduceActions;
- (id)digitalHealthBlacklist;
- (id)firstUpdateDateForActions:(id)a0;
- (void)invalidateOnGlobalQueueWithDelay:(double)a0;
- (BOOL)isActionBlacklisted:(id)a0;
- (id)produceActions;
- (void)scheduleNextHeuristicRefreshGivenActions:(id)a0;
- (void)setUpdateJobForCriteria:(id)a0;
- (BOOL)userAlreadyEngagedWithAction:(id)a0;

@end

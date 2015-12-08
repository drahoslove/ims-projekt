
#define TIME(h,m) ((60*(h))+(m))

typedef double t_time;

enum TrainType : int {
	TYPE_START,
	TYPE_PASS,
	TYPE_END,
};


struct ScheduleRecord
{
	t_time time;
	TrainType type; 
	int waitTime;

	friend bool operator<(const ScheduleRecord& x, const ScheduleRecord& y){
		return (x.time < y.time);
	}
};

std::map<int, std::vector<ScheduleRecord> > schedule = {
	{340, {
		{TIME(0,35), 10, TYPE_START},
		{TIME(4,25), 10, TYPE_START},
		{TIME(5,12), 10, TYPE_START},
		{TIME(6,11), 10, TYPE_START},
		{TIME(7,35), 10, TYPE_START},
		{TIME(8,12), 10, TYPE_START},
		{TIME(9,28), 10, TYPE_START},
		{TIME(10,15), 10, TYPE_START},
		{TIME(11,28), 10, TYPE_START},
		{TIME(12,15), 10, TYPE_START},
		{TIME(12,49), 10, TYPE_START},
		{TIME(13,28), 10, TYPE_START},
		{TIME(13,48), 10, TYPE_START},
		{TIME(14,14), 10, TYPE_START},
		{TIME(14,47), 10, TYPE_START},
		{TIME(15,28), 10, TYPE_START},
		{TIME(15,48), 10, TYPE_START},
		{TIME(16,14), 10, TYPE_START},
		{TIME(16,47), 10, TYPE_START},
		{TIME(17,28), 10, TYPE_START},
		{TIME(17,48), 10, TYPE_START},
		{TIME(18,15), 10, TYPE_START},
		{TIME(18,48), 10, TYPE_START},
		{TIME(19,28), 10, TYPE_START},
		{TIME(20,15), 10, TYPE_START},
		{TIME(21,28), 10, TYPE_START},
		{TIME(22,48), 10, TYPE_START},
		{TIME(4,50), 5, TYPE_END},
		{TIME(5,20), 5, TYPE_END},
		{TIME(5,50), 5, TYPE_END},
		{TIME(6,20), 5, TYPE_END},
		{TIME(6,50), 5, TYPE_END},
		{TIME(7,20), 5, TYPE_END},
		{TIME(7,33), 5, TYPE_END},
		{TIME(8,20), 5, TYPE_END},
		{TIME(8,34), 5, TYPE_END},
		{TIME(9,48), 5, TYPE_END},
		{TIME(10,33), 5, TYPE_END},
		{TIME(11,48), 5, TYPE_END},
		{TIME(12,33), 5, TYPE_END},
		{TIME(13,48), 5, TYPE_END},
		{TIME(14,33), 5, TYPE_END},
		{TIME(15,48), 5, TYPE_END},
		{TIME(16,33), 5, TYPE_END},
		{TIME(17,48), 5, TYPE_END},
		{TIME(18,33), 5, TYPE_END},
		{TIME(19,48), 5, TYPE_END},
		{TIME(20,33), 5, TYPE_END},
		{TIME(21,48), 5, TYPE_END},
		{TIME(22,33), 5, TYPE_END},
		}
	},
	{300, {
		{TIME(3,06), 10, TYPE_START},
		{TIME(4,35), 10, TYPE_START},
		{TIME(5,02), 10, TYPE_START},
		{TIME(5,23), 10, TYPE_START},
		{TIME(6,02), 10, TYPE_START},
		{TIME(6,28), 10, TYPE_START},
		{TIME(7,02), 10, TYPE_START},
		{TIME(7,18), 10, TYPE_START},
		{TIME(8,02), 10, TYPE_START},
		{TIME(9,02), 10, TYPE_START},
		{TIME(9,18), 10, TYPE_START},
		{TIME(11,02), 10, TYPE_START},
		{TIME(11,18), 10, TYPE_START},
		{TIME(12,02), 10, TYPE_START},
		{TIME(13,02), 10, TYPE_START},
		{TIME(13,18), 10, TYPE_START},
		{TIME(14,02), 10, TYPE_START},
		{TIME(15,02), 10, TYPE_START},
		{TIME(15,18), 10, TYPE_START},
		{TIME(16,02), 10, TYPE_START},
		{TIME(17,02), 10, TYPE_START},
		{TIME(17,18), 10, TYPE_START},
		{TIME(18,02), 10, TYPE_START},
		{TIME(19,02), 10, TYPE_START},
		{TIME(19,18), 10, TYPE_START},
		{TIME(20,02), 10, TYPE_START},
		{TIME(21,02), 10, TYPE_START},
		{TIME(22,46), 10, TYPE_START},
		{TIME(6,59), 5, TYPE_END},
		{TIME(7,46), 5, TYPE_END},
		{TIME(7,57), 5, TYPE_END},
		{TIME(8,42), 5, TYPE_END},
		{TIME(8,57), 5, TYPE_END},
		{TIME(9,57), 5, TYPE_END},
		{TIME(10,42), 5, TYPE_END},
		{TIME(10,57), 5, TYPE_END},
		{TIME(12,42), 5, TYPE_END},
		{TIME(12,57), 5, TYPE_END},
		{TIME(14,43), 5, TYPE_END},
		{TIME(14,59), 5, TYPE_END},
		{TIME(15,59), 5, TYPE_END},
		{TIME(16,43), 5, TYPE_END},
		{TIME(16,59), 5, TYPE_END},
		{TIME(17,59), 5, TYPE_END},
		{TIME(18,42), 5, TYPE_END},
		{TIME(18,59), 5, TYPE_END},
		{TIME(19,57), 5, TYPE_END},
		{TIME(20,26), 5, TYPE_END},
		{TIME(20,39), 5, TYPE_END},
		{TIME(20,57), 5, TYPE_END},
		{TIME(21,26), 5, TYPE_END},
		{TIME(22,26), 5, TYPE_END},
		{TIME(22,56), 5, TYPE_END},
		{TIME(5,05), 5, TYPE_PASS},
		{TIME(5,35), 5, TYPE_PASS},
		{TIME(6,05), 5, TYPE_PASS},
		{TIME(6,35), 5, TYPE_PASS},
		{TIME(7,06), 5, TYPE_PASS},
		{TIME(8,06), 5, TYPE_PASS},
		{TIME(9,06), 5, TYPE_PASS},
		{TIME(10,06), 5, TYPE_PASS},
		{TIME(11,06), 5, TYPE_PASS},
		{TIME(12,06), 5, TYPE_PASS},
		{TIME(13,06), 5, TYPE_PASS},
		{TIME(13,35), 5, TYPE_PASS},
		{TIME(14,06), 5, TYPE_PASS},
		{TIME(14,35), 5, TYPE_PASS},
		{TIME(15,06), 5, TYPE_PASS},
		{TIME(15,35), 5, TYPE_PASS},
		{TIME(16,06), 5, TYPE_PASS},
		{TIME(16,35), 5, TYPE_PASS},
		{TIME(17,06), 5, TYPE_PASS},
		{TIME(17,35), 5, TYPE_PASS},
		{TIME(18,06), 5, TYPE_PASS},
		{TIME(19,06), 5, TYPE_PASS},
		{TIME(20,06), 5, TYPE_PASS},
		{TIME(21,06), 5, TYPE_PASS},
		{TIME(4,55), 5, TYPE_PASS},
		{TIME(5,55), 5, TYPE_PASS},
		{TIME(6,25), 5, TYPE_PASS},
		{TIME(6,55), 5, TYPE_PASS},
		{TIME(7,26), 5, TYPE_PASS},
		{TIME(7,55), 5, TYPE_PASS},
		{TIME(8,26), 5, TYPE_PASS},
		{TIME(9,26), 5, TYPE_PASS},
		{TIME(10,26), 5, TYPE_PASS},
		{TIME(11,26), 5, TYPE_PASS},
		{TIME(12,26), 5, TYPE_PASS},
		{TIME(13,26), 5, TYPE_PASS},
		{TIME(14,26), 5, TYPE_PASS},
		{TIME(14,55), 5, TYPE_PASS},
		{TIME(15,26), 5, TYPE_PASS},
		{TIME(15,55), 5, TYPE_PASS},
		{TIME(16,26), 5, TYPE_PASS},
		{TIME(16,55), 5, TYPE_PASS},
		{TIME(17,26), 5, TYPE_PASS},
		{TIME(17,55), 5, TYPE_PASS},
		{TIME(18,26), 5, TYPE_PASS},
		{TIME(18,55), 5, TYPE_PASS},
		}
	},
	{260, {
		{TIME(4,31), 10, TYPE_START},
		{TIME(4,34), 10, TYPE_START},
		{TIME(5,41), 10, TYPE_START},
		{TIME(6,08), 10, TYPE_START},
		{TIME(6,14), 10, TYPE_START},
		{TIME(6,57), 10, TYPE_START},
		{TIME(8,57), 10, TYPE_START},
		{TIME(9,01), 10, TYPE_START},
		{TIME(10,01), 10, TYPE_START},
		{TIME(10,57), 10, TYPE_START},
		{TIME(11,01), 10, TYPE_START},
		{TIME(12,01), 10, TYPE_START},
		{TIME(12,57), 10, TYPE_START},
		{TIME(13,01), 10, TYPE_START},
		{TIME(13,44), 10, TYPE_START},
		{TIME(14,01), 10, TYPE_START},
		{TIME(14,14), 10, TYPE_START},
		{TIME(14,57), 10, TYPE_START},
		{TIME(15,14), 10, TYPE_START},
		{TIME(15,44), 10, TYPE_START},
		{TIME(16,14), 10, TYPE_START},
		{TIME(16,57), 10, TYPE_START},
		{TIME(17,14), 10, TYPE_START},
		{TIME(17,44), 10, TYPE_START},
		{TIME(18,57), 10, TYPE_START},
		{TIME(19,29), 10, TYPE_START},
		{TIME(20,01), 10, TYPE_START},
		{TIME(20,29), 10, TYPE_START},
		{TIME(20,57), 10, TYPE_START},
		{TIME(21,01), 10, TYPE_START},
		{TIME(22,01), 10, TYPE_START},
		{TIME(23,04), 10, TYPE_START},
		{TIME(6,14), 5, TYPE_END},
		{TIME(6,44), 5, TYPE_END},
		{TIME(6,59), 5, TYPE_END},
		{TIME(7,19), 5, TYPE_END},
		{TIME(7,31), 5, TYPE_END},
		{TIME(7,48), 5, TYPE_END},
		{TIME(8,14), 5, TYPE_END},
		{TIME(8,32), 5, TYPE_END},
		{TIME(9,02), 5, TYPE_END},
		{TIME(9,29), 5, TYPE_END},
		{TIME(10,29), 5, TYPE_END},
		{TIME(11,02), 5, TYPE_END},
		{TIME(11,29), 5, TYPE_END},
		{TIME(12,29), 5, TYPE_END},
		{TIME(13,02), 5, TYPE_END},
		{TIME(15,02), 5, TYPE_END},
		{TIME(15,45), 5, TYPE_END},
		{TIME(16,14), 5, TYPE_END},
		{TIME(16,45), 5, TYPE_END},
		{TIME(17,02), 5, TYPE_END},
		{TIME(18,31), 5, TYPE_END},
		{TIME(18,45), 5, TYPE_END},
		{TIME(19,02), 5, TYPE_END},
		{TIME(19,30), 5, TYPE_END},
		{TIME(19,38), 5, TYPE_END},
		{TIME(20,32), 5, TYPE_END},
		{TIME(21,02), 5, TYPE_END},
		{TIME(21,59), 5, TYPE_END},
		{TIME(22,57), 5, TYPE_END},
		{TIME(23,55), 5, TYPE_END},
		{TIME(4,57), 5, TYPE_PASS},
		{TIME(5,29), 5, TYPE_PASS},
		{TIME(5,57), 5, TYPE_PASS},
		{TIME(6,28), 5, TYPE_PASS},
		{TIME(6,59), 5, TYPE_PASS},
		{TIME(7,19), 5, TYPE_PASS},
		{TIME(7,59), 5, TYPE_PASS},
		{TIME(8,19), 5, TYPE_PASS},
		{TIME(8,59), 5, TYPE_PASS},
		{TIME(9,19), 5, TYPE_PASS},
		{TIME(9,59), 5, TYPE_PASS},
		{TIME(10,19), 5, TYPE_PASS},
		{TIME(10,59), 5, TYPE_PASS},
		{TIME(11,19), 5, TYPE_PASS},
		{TIME(11,59), 5, TYPE_PASS},
		{TIME(12,19), 5, TYPE_PASS},
		{TIME(12,59), 5, TYPE_PASS},
		{TIME(13,19), 5, TYPE_PASS},
		{TIME(13,29), 5, TYPE_PASS},
		{TIME(13,59), 5, TYPE_PASS},
		{TIME(14,19), 5, TYPE_PASS},
		{TIME(14,29), 5, TYPE_PASS},
		{TIME(15,59), 5, TYPE_PASS},
		{TIME(15,19), 5, TYPE_PASS},
		{TIME(15,31), 5, TYPE_PASS},
		{TIME(15,45), 5, TYPE_PASS},
		{TIME(16,19), 5, TYPE_PASS},
		{TIME(16,31), 5, TYPE_PASS},
		{TIME(16,59), 5, TYPE_PASS},
		{TIME(17,19), 5, TYPE_PASS},
		{TIME(17,30), 5, TYPE_PASS},
		{TIME(17,45), 5, TYPE_PASS},
		{TIME(17,59), 5, TYPE_PASS},
		{TIME(18,19), 5, TYPE_PASS},
		{TIME(18,59), 5, TYPE_PASS},
		{TIME(19,19), 5, TYPE_PASS},
		{TIME(19,59), 5, TYPE_PASS},
		{TIME(20,19), 5, TYPE_PASS},
		{TIME(20,59), 5, TYPE_PASS},
		{TIME(21,19), 5, TYPE_PASS},
		{TIME(2,43), 5, TYPE_PASS},
		{TIME(1,11), 5, TYPE_PASS},
		{TIME(5,01), 5, TYPE_PASS},
		{TIME(5,27), 5, TYPE_PASS},
		{TIME(6,00), 5, TYPE_PASS},
		{TIME(6,27), 5, TYPE_PASS},
		{TIME(6,41), 5, TYPE_PASS},
		{TIME(7,01), 5, TYPE_PASS},
		{TIME(7,29), 5, TYPE_PASS},
		{TIME(7,41), 5, TYPE_PASS},
		{TIME(8,02), 5, TYPE_PASS},
		{TIME(8,29), 5, TYPE_PASS},
		{TIME(8,41), 5, TYPE_PASS},
		{TIME(9,29), 5, TYPE_PASS},
		{TIME(9,41), 5, TYPE_PASS},
		{TIME(10,29), 5, TYPE_PASS},
		{TIME(10,41), 5, TYPE_PASS},
		{TIME(11,29), 5, TYPE_PASS},
		{TIME(11,41), 5, TYPE_PASS},
		{TIME(12,29), 5, TYPE_PASS},
		{TIME(12,41), 5, TYPE_PASS},
		{TIME(13,23), 5, TYPE_PASS},
		{TIME(13,41), 5, TYPE_PASS},
		{TIME(14,29), 5, TYPE_PASS},
		{TIME(14,41), 5, TYPE_PASS},
		{TIME(15,01), 5, TYPE_PASS},
		{TIME(15,29), 5, TYPE_PASS},
		{TIME(15,41), 5, TYPE_PASS},
		{TIME(16,01), 5, TYPE_PASS},
		{TIME(16,29), 5, TYPE_PASS},
		{TIME(16,41), 5, TYPE_PASS},
		{TIME(17,01), 5, TYPE_PASS},
		{TIME(17,29), 5, TYPE_PASS},
		{TIME(17,41), 5, TYPE_PASS},
		{TIME(18,01), 5, TYPE_PASS},
		{TIME(18,29), 5, TYPE_PASS},
		{TIME(18,41), 5, TYPE_PASS},
		}
	},
	{250, {
		
		}		
	},
	{244, {
		
		}
	},
	{240, {
	
		}
	}	
};
class Record{
	public:
		void setK(double);
		void setRa(double);
		void setRb(double);
		double calcE(double, double);
		int getK();
		int getRa();
		int getRb();
	private:
		double k, ra, rb;
};

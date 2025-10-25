import yfinance as yf

def get_nvidia_financial_data():
    # Define the ticker symbol for Nvidia
    ticker_symbol = "NVDA"
    
    # Fetch the data using yfinance
    nvidia_data = yf.Ticker(ticker_symbol)
    
    # Extract financial data
    financials = nvidia_data.financials
    balance_sheet = nvidia_data.balance_sheet
    cashflow = nvidia_data.cashflow
    earnings = nvidia_data.earnings
    
    # Print or return the data
    print("Financials:")
    print(financials)
    print("\nBalance Sheet:")
    print(balance_sheet)
    print("\nCashflow:")
    print(cashflow)
    print("\nEarnings:")
    print(earnings)

if __name__ == "__main__":
    get_nvidia_financial_data()